//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface FFTranscodeProjectFile : NSObject
{
}

+ (id)ReadSequenceFromFile:(id)arg1 forItem:(id)arg2 error:(id *)arg3;
+ (id)EventProject;
+ (void)ShutDown;
+ (void)Initialize;
+ (BOOL)WriteSequence:(id)arg1 toPath:(id)arg2 useTimelinePlaybackInShare:(BOOL)arg3 error:(id *)arg4;
+ (BOOL)WriteSequence:(id)arg1 toPath:(id)arg2 error:(id *)arg3;

@end

