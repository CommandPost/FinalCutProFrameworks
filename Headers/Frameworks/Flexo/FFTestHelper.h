//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface FFTestHelper : NSObject
{
}

+ (void)copyEdits:(id)arg1 toPasteboard:(id)arg2;
+ (void)copyMedia:(id)arg1 toPasteboard:(id)arg2;
+ (id)findItemWithName:(id)arg1 inItems:(id)arg2;
+ (id)findItemWithName:(id)arg1 atTime:(CDStruct_1b6d18a9)arg2 inItems:(id)arg3;
+ (BOOL)compareItems:(id)arg1 container:(id)arg2 names:(id *)arg3 startTimes:(CDStruct_1b6d18a9 *)arg4 durations:(CDStruct_1b6d18a9 *)arg5 lanes:(long long *)arg6 count:(unsigned long long)arg7 alignToFrameDuration:(CDStruct_1b6d18a9)arg8 errorMsg:(id *)arg9;
+ (id)clipWithName:(id)arg1 event:(id)arg2;
+ (id)eventWithName:(id)arg1 events:(id)arg2;
+ (id)clipsInEvent:(id)arg1;
+ (id)clipsInProject:(id)arg1;
+ (id)projectWithName:(id)arg1 projects:(id)arg2;
+ (id)projectInfosInLocation:(id)arg1;
+ (id)eventsInLocation:(id)arg1;
+ (id)_projectInfosForLocation:(id)arg1 error:(id *)arg2;
+ (id)_eventsForLocation:(id)arg1 error:(id *)arg2;
+ (id)_projectsForUrl:(id)arg1 isEventProject:(BOOL)arg2 error:(id *)arg3;
+ (id)_projectsURLForLocation:(id)arg1;
+ (id)_eventsURLForLocation:(id)arg1;
+ (id)pathForTestFile:(id)arg1 inTestFileDir:(id)arg2 class:(Class)arg3;
+ (id)_pathForTestXMLDir:(Class)arg1;
+ (id)_pathForTestMediaDir:(Class)arg1;
+ (id)_pathForTestFileDir:(id)arg1 class:(Class)arg2;
+ (void)dumpItems:(id)arg1;
+ (id)descriptionForItem:(id)arg1;
+ (void)generateTestDataForContainer:(id)arg1 flags:(unsigned long long)arg2;
+ (void)generateTestDataForItems:(id)arg1 inContainer:(id)arg2 flags:(unsigned long long)arg3 containerName:(id)arg4;
+ (void)generateTestDataForItems:(id)arg1 inContainer:(id)arg2 flags:(unsigned long long)arg3;

@end
