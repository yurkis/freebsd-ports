--- ./content/browser/browser_main_loop.cc.orig	2014-08-20 21:02:49.000000000 +0200
+++ ./content/browser/browser_main_loop.cc	2014-08-22 15:06:25.000000000 +0200
@@ -133,7 +133,7 @@
 namespace content {
 namespace {
 
-#if defined(OS_POSIX) && !defined(OS_MACOSX) && !defined(OS_ANDROID)
+#if defined(OS_POSIX) && !defined(OS_MACOSX) && !defined(OS_ANDROID) && !defined(OS_BSD)
 void SetupSandbox(const CommandLine& parsed_command_line) {
   TRACE_EVENT0("startup", "SetupSandbox");
   base::FilePath sandbox_binary;
@@ -334,7 +334,7 @@
 void BrowserMainLoop::EarlyInitialization() {
   TRACE_EVENT0("startup", "BrowserMainLoop::EarlyInitialization");
 
-#if defined(OS_POSIX) && !defined(OS_MACOSX) && !defined(OS_ANDROID)
+#if defined(OS_POSIX) && !defined(OS_MACOSX) && !defined(OS_ANDROID) && !defined(OS_BSD)
   // No thread should be created before this call, as SetupSandbox()
   // will end-up using fork().
   SetupSandbox(parsed_command_line_);
@@ -764,9 +764,9 @@
   }
 #endif
 
-#if defined(OS_POSIX) && !defined(OS_MACOSX) && !defined(OS_ANDROID)
+#if defined(OS_POSIX) && !defined(OS_MACOSX) && !defined(OS_ANDROID) && !defined(OS_BSD)
   ZygoteHostImpl::GetInstance()->TearDownAfterLastChild();
-#endif  // defined(OS_POSIX) && !defined(OS_MACOSX) && !defined(OS_ANDROID)
+#endif  // defined(OS_POSIX) && !defined(OS_MACOSX) && !defined(OS_ANDROID) && !defined(OS_BSD)
 
   // The device monitors are using |system_monitor_| as dependency, so delete
   // them before |system_monitor_| goes away.
