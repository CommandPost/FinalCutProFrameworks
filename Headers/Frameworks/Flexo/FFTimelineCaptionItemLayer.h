//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Flexo/PETimelineItemLayer.h>

@class CATextLayer, FFAnchoredCaption, FFAnchoredCollection;

__attribute__((visibility("hidden")))
@interface FFTimelineCaptionItemLayer : PETimelineItemLayer
{
    BOOL _leadingThroughEditVisible;
    BOOL _trailingThroughEditVisible;
    BOOL _isObservingAllErrors;
    FFAnchoredCollection *_anchoredCollection;
    CATextLayer *_titleLayer;
    CATextLayer *_debugLayer;
    double _audioFilmstripHeight;
}

@property(nonatomic) BOOL isObservingAllErrors; // @synthesize isObservingAllErrors=_isObservingAllErrors;
@property double audioFilmstripHeight; // @synthesize audioFilmstripHeight=_audioFilmstripHeight;
@property(retain, nonatomic) CATextLayer *debugLayer; // @synthesize debugLayer=_debugLayer;
@property(retain, nonatomic) CATextLayer *titleLayer; // @synthesize titleLayer=_titleLayer;
@property(readonly) FFAnchoredCollection *anchoredCollection; // @synthesize anchoredCollection=_anchoredCollection;
@property(nonatomic) BOOL trailingThroughEditVisible; // @synthesize trailingThroughEditVisible=_trailingThroughEditVisible;
@property(nonatomic) BOOL leadingThroughEditVisible; // @synthesize leadingThroughEditVisible=_leadingThroughEditVisible;
- (struct CGColor *)throughEditBackgroundColorForAngle:(int)arg1;
- (BOOL)isTrailingVideoThroughEditVisible;
- (BOOL)isLeadingVideoThroughEditVisible;
- (void)updateThroughEditsAppearance;
- (id)validColorScheme;
- (id)invalidColorScheme;
- (id)colorScheme;
- (BOOL)shouldUseActiveColorScheme;
- (BOOL)shouldUseInvalidColorScheme;
- (id)audioFilmstrip;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)setBounds:(struct CGRect)arg1;
- (void)setRepresentedObject:(id)arg1;
@property(readonly) FFAnchoredCaption *anchoredCaption;
- (void)startObservingAllErrorsForObject:(id)arg1;
- (void)stopObservingAllErrorsForObject:(id)arg1;
- (void)dealloc;

@end

