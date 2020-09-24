//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSOperation.h"

@class NSArray, NSURL;

__attribute__((visibility("hidden")))
@interface FFConsolidateEventsRequiredSpaceOperation : NSOperation
{
    BOOL _isExternalMedialocation;
    int _mediaRepOptions;
    NSArray *_events;
    NSURL *_mediaLocation;
}

@property int mediaRepOptions; // @synthesize mediaRepOptions=_mediaRepOptions;
@property BOOL isExternalMedialocation; // @synthesize isExternalMedialocation=_isExternalMedialocation;
@property(retain) NSURL *mediaLocation; // @synthesize mediaLocation=_mediaLocation;
@property(retain) NSArray *events; // @synthesize events=_events;
- (void)main;
- (void)dealloc;
- (id)initWithEvents:(id)arg1 mediaLocation:(id)arg2 isExternalMedialocation:(BOOL)arg3 mediaRepOptions:(int)arg4;

@end
