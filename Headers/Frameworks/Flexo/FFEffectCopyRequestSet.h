//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class FFEffect, FFLibrary, NSMutableSet, NSURL;

__attribute__((visibility("hidden")))
@interface FFEffectCopyRequestSet : NSObject
{
    _Bool _deleteSource;
    int _destination;
    NSMutableSet *_requests;
    FFEffect *_effect;
    FFLibrary *_library;
    NSURL *_sourceEffectFileURL;
    NSURL *_destFolderURL;
    NSURL *_destEffectFileURL;
    Class _effectClass;
}

@property _Bool deleteSource; // @synthesize deleteSource=_deleteSource;
@property int destination; // @synthesize destination=_destination;
@property Class effectClass; // @synthesize effectClass=_effectClass;
@property(retain) NSURL *destEffectFileURL; // @synthesize destEffectFileURL=_destEffectFileURL;
@property(retain) NSURL *destFolderURL; // @synthesize destFolderURL=_destFolderURL;
@property(retain) NSURL *sourceEffectFileURL; // @synthesize sourceEffectFileURL=_sourceEffectFileURL;
@property(retain) FFLibrary *library; // @synthesize library=_library;
@property(retain) FFEffect *effect; // @synthesize effect=_effect;
@property(retain, nonatomic) NSMutableSet *requests; // @synthesize requests=_requests;
- (BOOL)isEqualToRequestSet:(id)arg1;
- (int)numOutstandingRequests;
- (void)removeCopyRequest:(id)arg1;
- (void)addCopyRequest:(id)arg1;
- (oneway void)dealloc;
- (id)init:(id)arg1 effectClass:(Class)arg2 library:(id)arg3 sourceEffectFileURL:(id)arg4 destEffectFolderURL:(id)arg5 destEffectFileURL:(id)arg6 destination:(int)arg7;

@end

