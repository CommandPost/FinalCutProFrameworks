//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFBaseDSObject.h>

#import "NSCoding.h"
#import "NSCopying.h"

@class FFAnchoredSequence, NSDate, NSMutableArray, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface FFSequenceInfo : FFBaseDSObject <NSCoding, NSCopying>
{
    NSString *_sequenceID;
    NSString *_displayName;
    CDStruct_e83c9415 _mediaRange;
    NSDate *_modDate;
    CDStruct_1b6d18a9 _frameDuration;
    CDStruct_1b6d18a9 _timecodeFrameDuration;
    long long _timecodeDisplayDropFrame;
    int _fieldDominance;
    struct CGSize _frameSize;
    NSMutableArray *_thumbnailMD5s;
    NSMutableArray *_proxyThumbnailMD5s;
    BOOL _hasAudio;
    BOOL _hasVideo;
    BOOL _needToClearSequenceThumbnailMD5Cache;
    NSMutableArray *_thumbnailRequests;
    NSMutableArray *_thumbnailCompletionTargets;
    NSMutableDictionary *_md5Cache;
    FFAnchoredSequence *_sequence;
}

+ (BOOL)classIsAbstract;
+ (id)copyClassDescription;
+ (id)keyPathsForValuesAffectingDisplayName;
- (id)initWithDisplayName:(id)arg1;
- (void)dealloc;
- (id)thumbnailMD5s;
- (void)setThumbnailMD5s:(id)arg1;
- (void)insertObject:(id)arg1 inThumbnailMD5sAtIndex:(unsigned long long)arg2;
- (void)removeObjectFromThumbnailMD5sAtIndex:(unsigned long long)arg1;
- (void)replaceObjectInThumbnailMD5sAtIndex:(unsigned long long)arg1 withObject:(id)arg2;
- (id)proxyThumbnailMD5s;
- (void)setProxyThumbnailMD5s:(id)arg1;
- (void)insertObject:(id)arg1 inProxyThumbnailMD5sAtIndex:(unsigned long long)arg2;
- (void)removeObjectFromProxyThumbnailMD5sAtIndex:(unsigned long long)arg1;
- (void)replaceObjectInProxyThumbnailMD5sAtIndex:(unsigned long long)arg1 withObject:(id)arg2;
@property(copy, nonatomic) NSString *sequenceID;
@property(nonatomic) CDStruct_e83c9415 mediaRange;
- (void)resetThumbnailMD5s;
@property(nonatomic) CDStruct_1b6d18a9 frameDuration;
@property(nonatomic) CDStruct_1b6d18a9 timecodeFrameDuration;
@property(nonatomic) long long timecodeDisplayDropFrame;
@property(nonatomic) int fieldDominance;
@property(nonatomic) struct CGSize frameSize;
@property(copy, nonatomic) NSString *displayName;
@property(nonatomic) BOOL needToClearSequenceThumbnailMD5Cache; // @synthesize needToClearSequenceThumbnailMD5Cache=_needToClearSequenceThumbnailMD5Cache;
- (void)releaseSequence;
@property(readonly, nonatomic) BOOL isSequenceLoaded;
- (id)sequenceShareFingerPrint;
- (id)sequence;
- (struct CGImage *)thumbnailForRange:(CDStruct_e83c9415)arg1 target:(id)arg2;
- (CDStruct_e83c9415)thumbnailRangeForRequestRange:(CDStruct_e83c9415)arg1;
- (void)cancelRequestsFrom:(id)arg1;
- (double)aspectRatio;
@property(readonly, nonatomic) BOOL hasAudio;
@property(readonly, nonatomic) BOOL hasVideo;
- (void)setHasAudio:(BOOL)arg1;
- (void)setHasVideo:(BOOL)arg1;
- (BOOL)_hasThumbnailMD5s;
- (void)_checkSetup;
- (void)_updateThumbnails;
- (void)thumbImageReadyOnMainThread:(id)arg1;
- (void)thumbImageReady:(id)arg1;
- (void)_updateThumbnailsOnMainThread;
- (int)_thumbnailCellForRange:(CDStruct_e83c9415)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
@property(copy, nonatomic) NSDate *modDate; // @synthesize modDate=_modDate;

@end

