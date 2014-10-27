$NetBSD$

--- arj.c.orig	2005-06-21 19:53:12.000000000 +0000
+++ arj.c
@@ -1062,6 +1062,8 @@ int main(int argc, char *argv[])
  #if TARGET!=DOS
   if(priority.class>0)
    set_priority(&priority);
+ #elif defined(__HAIKU__)
+ int setpriority(int which, id_t who, int priority);
  #endif
  if(run_cmd_at_start&&start_cmd[0]!='\0')
   exec_cmd(start_cmd);
