//
//  HeartbeatSettings.h
//  Heartbeat
//
//  Created by Shaun Harrison on 2/2/09.
//  Copyright 2009 enormego. All rights reserved.
//

/*
 * This can be found in your Heartbeat control panel:
 * Select "Help" on the top bar, then select "API"
 * Look for "API Access Key" under "API Access Details"
 */
#define HEARTBEAT_API_KEY @"dce0c055c8124c130536033e9b28faf6"

/*
* This can be found in your Heartbeat control panel:
* Select "Help" on the top bar, then select "API"
* Look for the "App Key" for the app you wish to track under "App Keys"
 */
#if BRIEFCASE_LITE
#   define HEARTBEAT_APP_ID @"7ce9da3bd8593a53d10813c5ac929040"
#else
#   define HEARTBEAT_APP_ID @"5a0bfc7e513ccc6e3f20989f73d14a26"
#endif

/*
 * The domain you access Heartbeat with, usually companyname.heartbeatapp.com
 * DO NOT INCLUDE THE HTTP://
 */
#define HEARTBEAT_DOMAIN @"heymac.heartbeatapp.com"

/*
 * Determines whether or not to enable the [Heartbeat isCracked] method.
 * If this is disabled, the method will not be compiled, and piracy stats
 * will not be transferred to Heartbeat when you call [Heartbeat notify]
 */
#define HEARTBEAT_CHECK_PIRACY 1

/*
 * Determines whether or not to enable the Crash Reporting in Heartbeat.
 * If this is disabled, none of the code that handles crash reporting will be compiled.
 */
#define HEARTBEAT_ENABLE_CRASH_REPORTS 1

/*
 * Allows you to adjust the level of piracy detection you want.
 * This setting has no effect if HEARTBEAT_CHECK_PIRACY is set to 0
 *	1 - Checks for invalid Info.plist key that will only be there if the app is cracked
 *	2 - Checks to see if Info.plist contains XML, when the app is built for the iPhone, Info.plist is not XML
 *	3 - Checks to see if Info.plist was modified after you built the app
 *
 * All settings follow each other, if you set this to 2, both 1 and 2 have to be true, 
 * if you set it to 3, and 1 or 2 are false  [Heartbeat isCracked] will return NO
 *
 * The recommended level for this is 2.
 *
 */
#define HEARTBEAT_PIRACY_THRESHOLD 2

/*
 * As an extra piracy measure, you can change the name of the Heartbeat class and the name of all it's methods
 * This will make it much harder for a cracker to tell which class is Heartbeat and what methods to override 
 * Make sure everything you use are valid class and method names for each definition
 *
 * If you don't want to override anything, just leave the block of code commented out
 */

#define Heartbeat SocketConnectionMonitor
#define postHitNotification testNetworkAvailability
#define handleCrashReportIfPending disconnectRemoteService
#define crashReportPending logDataAvailable
#define handleCrashReport saveLogData
#define clearCrashReports clearLogData
#define isCracked isNetworkReachible
#define connectionStatus networkConnectionStatus
#define stackTraceForReport connectivityStatus
#define postToHeartbeatWithDictionary testLanAvailability

/*
 * Provides console output debug data if you're having problems getting Heartbeat to work
 */
#define HEARTBEAT_DEBUG 0
