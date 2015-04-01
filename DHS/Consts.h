//
//  Consts.h
//  DHS
//
//  Created by Patrick Wardle on 2/6/15.
//  Copyright (c) 2015 Objective-See, LLC. All rights reserved.
//

#ifndef DHS_Consts_h
#define DHS_Consts_h


//button text, start scan
#define START_SCAN @"Start Scan"

//button text, stop scan
#define STOP_SCAN @"Stop Scan"

//status msg
#define SCAN_MSG_PARTIAL @"scanning running processes"

//status msg
#define SCAN_MSG_FULL @"scanning entire system"

//status msg
#define SCAN_MSG_STOPPED @"scan stopped"

//status msg
#define SCAN_MSG_COMPLETE @"scan complete!"

//success
#define STATUS_SUCCESS 0

//keys for scanner options
#define KEY_SCANNER_FULL @"scanFull"
#define KEY_SCANNER_WEAK_HIJACKERS @"scan4WeakHijackers"

//keys for signing stuff
#define KEY_SIGNATURE_STATUS @"signatureStatus"
#define KEY_SIGNING_AUTHORITIES @"signingAuthorities"


//executable path
#define EXECUTABLE_PATH @"@executable_path"

//loader path
#define LOADER_PATH @"@loader_path"

//rpath
#define RUN_SEARCH_PATH @"@rpath"

//type
// ->rpath
#define ISSUE_TYPE_RPATH 1

//type
// ->weak
#define ISSUE_TYPE_WEAK 2

//path to LSOF
#define LSOF @"/usr/sbin/lsof"

//header for table
// ->hijacked apps
#define TABLE_HEADER_HIJACK @"Hijacked Applications"

//header for table
// ->vulnerable apps
#define TABLE_HEADER_VULNERABLE @"Vulnerable Applications"


//id (tag) for total's msg
#define TABLE_HEADER_TOTAL_TAG 101

//id (tag) for detailed text in rows
#define TABLE_ROW_SUB_TEXT_TAG 2

//id (tag) for 'find in finder' button
#define TABLE_ROW_FINDER_BUTTON 3

//ellipis
// ->for long paths...
#define ELLIPIS @"..."

//key for JSON output
#define KEY_ITEM @"item"

//output file
#define OUTPUT_FILE @"dhsFindings.txt"

#endif