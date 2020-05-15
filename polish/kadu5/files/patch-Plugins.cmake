--- Plugins.cmake.orig	2017-04-30 21:51:01 UTC
+++ Plugins.cmake
@@ -2,7 +2,7 @@ set (DEFAULT_PLUGINS
 
 # protocols
 	# Facebook Chat protocol support
-	facebook_protocol
+	#facebook_protocol
 	# GaduGadu protocol support
 	gadu_protocol
 	# Jabber/XMPP protocol support
@@ -108,12 +108,12 @@ if (UNIX AND NOT APPLE)
 	# docking
 		# Indicator docking support
 		# Comment if you are not compilign under Ubuntu flavor
-		indicator_docking
+		#indicator_docking
 
 	# integration
 		# integration with Unity
 		# Comment if you are not compilign under Ubuntu flavor
-		unity_integration
+		#unity_integration
 
 	# notifiers
 		# Freedesktop notification support
