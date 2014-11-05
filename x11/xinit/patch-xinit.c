$NetBSD$

--- xinit.c.orig	2014-03-25 09:20:26.000000000 +0000
+++ xinit.c
@@ -390,7 +390,7 @@ processTimeout(int timeout, const char *
 }
 
 static pid_t
-startServer(char *server_argv[])
+startServer(char *server[])
 {
     sigset_t mask, old;
     const char * const *cpp;
@@ -422,12 +422,12 @@ startServer(char *server_argv[])
          * if client is xterm -L
          */
         setpgid(0,getpid());
-        Execute(server_argv);
+        Execute(server);
 
-        Error("unable to run server \"%s\"", server_argv[0]);
+        Error("unable to run server \"%s\"", server[0]);
 
         fprintf(stderr, "Use the -- option, or make sure that %s is in your path and\n", bindir);
-        fprintf(stderr, "that \"%s\" is a program or a link to the right type of server\n", server_argv[0]);
+        fprintf(stderr, "that \"%s\" is a program or a link to the right type of server\n", server[0]);
         fprintf(stderr, "for your display.  Possible server names include:\n\n");
         for (cpp = server_names; *cpp; cpp++)
             fprintf(stderr, "    %s\n", *cpp);
@@ -442,7 +442,6 @@ startServer(char *server_argv[])
         /*
          * don't nice server
          */
-        setpriority(PRIO_PROCESS, serverpid, -1);
 
         errno = 0;
         if(! processTimeout(0, "")) {
@@ -556,7 +555,7 @@ setWindowPath(void)
 }
 
 static pid_t
-startClient(char *client_argv[])
+startClient(char *client[])
 {
     clientpid = fork();
     if (clientpid == 0) {
@@ -568,8 +567,8 @@ startClient(char *client_argv[])
             _exit(EXIT_FAILURE);
         }
         setpgid(0, getpid());
-        Execute(client_argv);
-        Error("Unable to run program \"%s\"", client_argv[0]);
+        Execute(client);
+        Error("Unable to run program \"%s\"", client[0]);
 
         fprintf(stderr, "Specify a program on the command line or make sure that %s\n", bindir);
         fprintf(stderr, "is in your path.\n\n");
@@ -603,7 +602,7 @@ shutdown(void)
 
         /* HUP all local clients to allow them to clean up */
         if (killpg(clientpid, SIGHUP) < 0 && errno != ESRCH)
-            Error("can't send HUP to process group %d", clientpid);
+            Error("can't send HUP to process group", clientpid);
     }
 
     if (serverpid < 0)
