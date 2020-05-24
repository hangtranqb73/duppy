//
//  nstask-bridge.h
//  duppy2
//
//  Created by ZonD Eighty on 24.05.2020.
//  Copyright © 2020 appdb. All rights reserved.
//

#ifndef nstask_bridge_h
#define nstask_bridge_h

/*
 * This header is generated by classdump-dyld 1.0
 * on Thursday, January 25, 2018 at 11:20:38 PM Eastern European Standard Time
 * Operating System: Version 11.1.2 (Build 15B202)
 * Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
 * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
 */


#import <Foundation/Foundation.h>
@class NSURL, NSArray, NSDictionary;

@interface NSTask : NSObject

@property (copy) NSURL * executableURL;
@property (copy) NSArray * arguments;
@property (copy) NSDictionary * environment;
@property (copy) NSURL * currentDirectoryURL;
@property (retain) id standardInput;
@property (retain) id standardOutput;
@property (retain) id standardError;
@property (readonly) int processIdentifier;
@property (getter=isRunning,readonly) BOOL running;
@property (readonly) int terminationStatus;
@property (readonly) long long terminationReason;
@property (copy) id terminationHandler;
@property (assign) long long qualityOfService;
+(id)currentTaskDictionary;
+(id)launchedTaskWithDictionary:(id)arg1 ;
+(id)launchedTaskWithLaunchPath:(id)arg1 arguments:(id)arg2 ;
+(id)launchedTaskWithExecutableURL:(id)arg1 arguments:(id)arg2 error:(out id*)arg3 terminationHandler:(/*^block*/id)arg4 ;
+(id)allocWithZone:(NSZone*)arg1 ;
-(void)waitUntilExit;
-(NSURL *)executableURL;
-(id)currentDirectoryPath;
-(void)setArguments:(NSArray *)arg1 ;
-(void)setCurrentDirectoryPath:(id)arg1 ;
-(id)launchPath;
-(void)setLaunchPath:(id)arg1 ;
-(int)terminationStatus;
-(long long)terminationReason;
-(void)launch;
-(BOOL)launchAndReturnError:(id*)arg1 ;
-(void)setCurrentDirectoryURL:(NSURL *)arg1 ;
-(NSURL *)currentDirectoryURL;
-(void)setExecutableURL:(NSURL *)arg1 ;
-(void)interrupt;
-(long long)suspendCount;
-(void)setStandardInput:(id)arg1 ;
-(void)setStandardOutput:(id)arg1 ;
-(void)setStandardError:(id)arg1 ;
-(id)standardInput;
-(id)standardOutput;
-(id)standardError;
-(id)init;
-(NSDictionary *)environment;
-(BOOL)isRunning;
-(BOOL)suspend;
-(BOOL)resume;
-(void)setEnvironment:(NSDictionary *)arg1 ;
-(void)setQualityOfService:(long long)arg1 ;
-(void)setTerminationHandler:(id)arg1 ;
-(int)processIdentifier;
-(id)terminationHandler;
-(long long)qualityOfService;
-(void)terminate;
-(NSArray *)arguments;
@end


#endif /* nstask_bridge_h */
