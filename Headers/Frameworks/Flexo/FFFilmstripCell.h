//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CALayer, FFThumbnailRequest, NSObject<FFSkimmableProtocol><FFDataModelProtocol><FFInspectableObject>, TLKThemeBackedLayer;

__attribute__((visibility("hidden")))
@interface FFFilmstripCell : NSObject
{
    struct NSObject *_skimmable;
    struct CGRect _frame;
    double _contentsScale;
    CDStruct_e83c9415 _timeRange;
    BOOL wantsDebug;
    double _audioHeight;
    BOOL _audioOnly;
    BOOL _transparentBackground;
    BOOL _forceVideoColor;
    CALayer *_layer;
    CALayer *_primaryImageBackgroundLayer;
    CALayer *_secondaryImageBackgroundLayer;
    TLKThemeBackedLayer *_thumbLoadingLayer;
    CALayer *_primaryImageLayer;
    CALayer *_secondaryImageLayer;
    BOOL _showAudioInPrimary;
    BOOL _showSecondary;
    BOOL _showAudioInSecondary;
    int _requestTimeType;
    FFThumbnailRequest *_ir1;
    FFThumbnailRequest *_ir2;
    CDStruct_bdcb2b0d _ir1MD5;
    CDStruct_bdcb2b0d _ir2MD5;
    long long _effectCount;
    id <FFFilmstripCellDelegate> _priorityDelegate;
    CDStruct_e83c9415 _filmStripTimeRange;
}

+ (struct CGColor *)filmstripClipBaseAudioEmpty;
+ (struct CGColor *)filmstripClipBaseVideoEmpty;
+ (struct CGColor *)blueBackground;
+ (struct CGColor *)greenBackground;
+ (struct CGColor *)_placeholderAudioColorForScale:(double)arg1;
@property(nonatomic) CDStruct_e83c9415 filmStripTimeRange; // @synthesize filmStripTimeRange=_filmStripTimeRange;
@property(nonatomic) id <FFFilmstripCellDelegate> priorityDelegate; // @synthesize priorityDelegate=_priorityDelegate;
@property(nonatomic) BOOL forceVideoColor; // @synthesize forceVideoColor=_forceVideoColor;
@property(nonatomic) BOOL transparentBackground; // @synthesize transparentBackground=_transparentBackground;
@property(nonatomic) double audioHeight; // @synthesize audioHeight=_audioHeight;
@property(retain, nonatomic) TLKThemeBackedLayer *thumbLoadingLayer; // @synthesize thumbLoadingLayer=_thumbLoadingLayer;
@property(retain, nonatomic) CALayer *secondaryImageLayer; // @synthesize secondaryImageLayer=_secondaryImageLayer;
@property(retain, nonatomic) CALayer *primaryImageLayer; // @synthesize primaryImageLayer=_primaryImageLayer;
@property(retain, nonatomic) CALayer *secondaryImageBackgroundLayer; // @synthesize secondaryImageBackgroundLayer=_secondaryImageBackgroundLayer;
@property(retain, nonatomic) CALayer *primaryImageBackgroundLayer; // @synthesize primaryImageBackgroundLayer=_primaryImageBackgroundLayer;
@property(nonatomic) BOOL wantsDebug; // @synthesize wantsDebug;
@property(nonatomic) CDStruct_e83c9415 timeRange; // @synthesize timeRange=_timeRange;
@property(nonatomic) double contentsScale; // @synthesize contentsScale=_contentsScale;
@property(nonatomic) struct CGRect frame; // @synthesize frame=_frame;
@property(readonly, nonatomic) NSObject<FFSkimmableProtocol><FFDataModelProtocol><FFInspectableObject> *skimmable; // @synthesize skimmable=_skimmable;
- (id)actionForLayer:(id)arg1 forKey:(id)arg2;
- (BOOL)isRoughlyEquavilentToFilmstripCell:(id)arg1;
- (BOOL)isEquavilentToFilmstripCell:(id)arg1;
- (void)cancelRequest;
- (void)updateIfNeeded;
- (void)secondaryThumbImageReady:(id)arg1;
- (void)primaryThumbImageReady:(id)arg1;
- (void)secondaryThumbImageReadyOnMainThread:(id)arg1;
- (void)primaryThumbImageReadyOnMainThread:(id)arg1;
- (void)_setContents:(struct CGImage *)arg1 forLayer:(id)arg2;
- (BOOL)shouldShowSecondary;
- (void)releaseLayer;
- (BOOL)hasLayer;
- (void)addDebugInfoToLayer:(id)arg1;
- (id)layer;
- (void)setSublayerIfExists:(id)arg1 toWidth:(double)arg2;
- (struct CGImage *)newRepresentativeThumb;
@property(readonly, nonatomic) struct CGRect thumbFrame;
- (id)debugDescription;
- (id)description;
- (void)dealloc;
- (id)initWithSkimmable:(struct NSObject *)arg1 Frame:(struct CGRect)arg2 andTimeRange:(CDStruct_e83c9415)arg3 audioHeight:(double)arg4 requestTimeType:(int)arg5 filmStripTimeRange:(CDStruct_e83c9415)arg6 effectCount:(long long)arg7;

@end

