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

+ (id)keyPathsForValuesAffectingDisplayName;
+ (id)copyClassDescription;
+ (BOOL)classIsAbstract;
@property(nonatomic) BOOL needToClearSequenceThumbnailMD5Cache; // @synthesize needToClearSequenceThumbnailMD5Cache=_needToClearSequenceThumbnailMD5Cache;
@property(copy, nonatomic) NSDate *modDate; // @synthesize modDate=_modDate;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (int)_thumbnailCellForRange:(CDStruct_e83c9415)arg1;
- (void)_updateThumbnailsOnMainThread:(id)arg1;
- (void)thumbImageReady:(id)arg1;
- (void)thumbImageReadyOnMainThread:(id)arg1;
- (void)_updateThumbnails:(double)arg1;
- (void)_checkSetup;
- (BOOL)_hasThumbnailMD5s;
- (void)setHasVideo:(BOOL)arg1;
- (void)setHasAudio:(BOOL)arg1;
@property(readonly, nonatomic) BOOL hasVideo;
@property(readonly, nonatomic) BOOL hasAudio;
- (double)aspectRatio;
- (void)cancelRequestsFrom:(id)arg1;
- (CDStruct_e83c9415)thumbnailRangeForRequestRange:(CDStruct_e83c9415)arg1;
- (struct CGImage *)thumbnailForRange:(CDStruct_e83c9415)arg1 contentsScale:(double)arg2 target:(id)arg3;
- (id)sequence;
- (id)sequenceShareFingerPrint;
@property(readonly, nonatomic) BOOL isSequenceLoaded;
- (void)releaseSequence;
@property(copy, nonatomic) NSString *displayName;
@property(nonatomic) struct CGSize frameSize;
@property(nonatomic) int fieldDominance;
@property(nonatomic) long long timecodeDisplayDropFrame;
@property(nonatomic) CDStruct_1b6d18a9 timecodeFrameDuration;
@property(nonatomic) CDStruct_1b6d18a9 frameDuration;
- (void)resetThumbnailMD5s;
@property(nonatomic) CDStruct_e83c9415 mediaRange;
@property(copy, nonatomic) NSString *sequenceID;
- (void)replaceObjectInProxyThumbnailMD5sAtIndex:(unsigned long long)arg1 withObject:(id)arg2;
- (void)removeObjectFromProxyThumbnailMD5sAtIndex:(unsigned long long)arg1;
- (void)insertObject:(id)arg1 inProxyThumbnailMD5sAtIndex:(unsigned long long)arg2;
- (void)setProxyThumbnailMD5s:(id)arg1;
- (id)proxyThumbnailMD5s;
- (void)replaceObjectInThumbnailMD5sAtIndex:(unsigned long long)arg1 withObject:(id)arg2;
- (void)removeObjectFromThumbnailMD5sAtIndex:(unsigned long long)arg1;
- (void)insertObject:(id)arg1 inThumbnailMD5sAtIndex:(unsigned long long)arg2;
- (void)setThumbnailMD5s:(id)arg1;
- (id)thumbnailMD5s;
- (void)dealloc;
- (id)initWithDisplayName:(id)arg1;

@end

