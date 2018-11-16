//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FFLibraryDocument, NSMapTable, NSMutableSet;

__attribute__((visibility("hidden")))
@interface FFUpdateProjectsIntoHiddenEvents : NSObject
{
    FFLibraryDocument *_document;
    NSMapTable *_mediaClips;
    NSMutableSet *_indexedEvents;
}

+ (BOOL)update:(id)arg1 error:(id *)arg2;
- (BOOL)runTask:(id *)arg1;
- (id)updateProject:(id)arg1 error:(id *)arg2;
- (void)findOrCreateUsedClips:(id)arg1 into:(id)arg2;
- (void)findOrCreateMediaClips:(struct NSSet *)arg1 into:(id)arg2;
- (void)indexProjectClips:(id)arg1 andMediaClipsForEvent:(id)arg2;
- (id)library;
- (void)dealloc;
- (id)initWithDocument:(id)arg1;

@end
