//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class NSArray, NSColor, NSImage, NSMutableArray, PEPeakIndicatorView;

@interface PEAudioMeterView : NSView
{
    NSImage *mMeterImage;
    NSImage *mPeakImage[2];
    NSImage *mMeterWellImage;
    NSImage *mMeterImageNew;
    NSImage *mClippingMeterImage;
    struct CGSize mMeterImageSize;
    struct CGSize mPeakImageSize;
    NSImage *mHorizontalMeterWell;
    NSImage *mCachedMeterImage;
    NSImage *mCachedMeterWellImage;
    NSImage *mLevelLabelImages[11];
    struct CGRect mMeterRect;
    struct CGRect mPeakRect;
    struct CGPoint mMeterDrawingOffset;
    BOOL mHasImages;
    BOOL mIsVerticalOrientation;
    BOOL mImageNeedsRotation;
    BOOL mUsesPeakLight;
    BOOL mCacheOwnImages;
    BOOL mDisplayTickMarks;
    BOOL mDisplayChannelLabels;
    BOOL mUseTickMarksForLowerdBValues;
    BOOL mIsHUD;
    int mMeterSize;
    float mRangeBetweenMaxAndMinLevels;
    float mMeterWidth;
    float mMeterWellLeftMargin;
    float mMarginBetweenMeters;
    float mLFESeparatorMargin;
    float mLFEPositionFromRightEdgeOfMeterWell;
    float mLevelLabelWidth;
    unsigned int mFirstVisibleChannel;
    double mMinValue;
    double mPeakLightValue;
    double mMaxDisplayValue;
    double mDecayDelta;
    BOOL mIsAudible;
    BOOL mIsSurround;
    BOOL mDisplayJacks;
    double mLastPeakTime;
    double mPeakHoldTime;
    id mDelegate;
    PEPeakIndicatorView *mPeakIndicator;
    unsigned int mNumChannels;
    struct {
        char mDrawPeakHold;
        double mValue;
        double mPeakLightValue;
        double mPeakValue;
        double mDisplayValue;
        double mPeakHoldValue;
        double mLastDisplayedValue;
        double mPeakExpirationTime;
        double mLastUpdateTime;
    } mChannelData[256];
    NSMutableArray *mToolTipViews;
    long long mThemeVariant;
    NSArray *mNumberLabelArray;
    NSColor *mWell0dBGuidelineColor;
    NSColor *mWellGuidelineColor;
    NSImage *mPannerLabel_C;
    NSImage *mPannerLabelHUD_C;
    NSImage *mPannerLabel_E;
    NSImage *mPannerLabelHUD_E;
    NSImage *mPannerLabel_F;
    NSImage *mPannerLabelHUD_F;
    NSImage *mPannerLabel_L;
    NSImage *mPannerLabelHUD_L;
    NSImage *mPannerLabel_R;
    NSImage *mPannerLabelHUD_R;
    NSImage *mPannerLabel_S;
    NSImage *mPannerLabelHUD_S;
}

- (void)_cacheThemeElements;
- (void)_ensureValidValueForChannel:(unsigned int)arg1;
- (unsigned int)_translateChannelIndex:(unsigned int)arg1;
- (unsigned int)_translateJackChannelIndexSurroundIndex:(unsigned int)arg1;
- (long long)_numDigitsInIndex:(unsigned int)arg1;
- (float)_maxChannelLabelWidthAtIndex:(unsigned int)arg1;
- (id)_channelLabelAtIndex:(unsigned int)arg1;
- (unsigned int)_numCharactersInSurroundIndex:(unsigned int)arg1;
- (float)_maxChannelLabelWidthForNumCharacters:(unsigned int)arg1;
- (id)_surroundChannelLabelAtIndex:(unsigned int)arg1;
- (void)setPeakImage:(id)arg1 active:(BOOL)arg2;
- (void)setMinValue:(double)arg1;
- (double)minValue;
- (void)setValue:(double)arg1;
- (void)setValue:(double)arg1 forChannel:(unsigned int)arg2;
- (double)valueForChannel:(unsigned int)arg1;
- (double)maxDisplayValue;
- (void)setMaxDisplayValue:(double)arg1;
- (void)setPeakLightValue:(double)arg1;
- (double)peakLightValue;
- (void)setDecayDelta:(double)arg1;
- (double)decayDelta;
- (void)setPeakHoldTime:(double)arg1;
- (double)peakHoldTime;
- (BOOL)isVerticalOrientation;
- (void)setVertical:(BOOL)arg1;
- (double)peakValue;
- (double)peakValueForChannel:(unsigned int)arg1;
- (void)setPeakValue:(double)arg1 forChannel:(unsigned int)arg2;
- (BOOL)isAudible;
- (void)setIsAudible:(BOOL)arg1;
- (void)setDelegate:(id)arg1;
- (void)resetToMinValue;
- (void)update:(double)arg1 channel:(unsigned int)arg2;
- (void)update:(double)arg1;
- (BOOL)peakLightState;
- (void)setPeakLightState:(BOOL)arg1;
- (id)peakIndicator;
- (BOOL)cacheOwnImages;
- (void)setCacheOwnImages:(BOOL)arg1;
- (struct CGSize)meterImageSize;
- (struct CGSize)meterWellSize;
- (id)meterImage:(int)arg1;
- (void)setCachedMeterImage:(id)arg1;
- (void)setCachedMeterWellImage:(id)arg1;
- (void)setClippingMeterImage:(id)arg1;
- (id)clippingMeterImage;
- (void)setMeterImage:(id)arg1;
- (void)setLevelLabelImage:(id)arg1 atIndex:(unsigned int)arg2;
- (id)meterImage;
- (void)setHorizontalMeterWellImage:(id)arg1;
- (void)_setupToolTips:(const CDStruct_3bc548f3 *)arg1;
- (void)_drawMeterImage:(const CDStruct_3bc548f3 *)arg1;
- (void)_drawPeakImage:(const CDStruct_3bc548f3 *)arg1;
- (void)_iterateOverMeters:(SEL)arg1;
- (void)setupDrawingVariables;
- (unsigned int)numberOfChannels;
- (void)setNumberOfChannels:(unsigned int)arg1 isSurround:(BOOL)arg2 displayJacks:(BOOL)arg3;
- (void)setFirstVisibleChannel:(int)arg1;
- (void)scrollRight;
- (void)scrollLeft;
- (void)setMeterSize:(int)arg1;
- (void)setDisplayTickMarks:(BOOL)arg1;
- (void)setDisplayChannelLabels:(BOOL)arg1;
- (float)meterLength;
- (float)meterWidth;
- (BOOL)isSurround;
- (int)firstVisibleChannel;
- (float)marginBetweenMeters;
- (int)numberOfVisibleChannels;
- (float)widthDisplayableInTabForCurrentNumberOfChannels;
- (float)widthRequiredForCurrentNumberOfChannels;
- (BOOL)isMeterResizingRequired;
- (long long)themeVariant;
- (void)setThemeVariant:(long long)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)awakeFromNib;
- (void)drawRect:(struct CGRect)arg1;
- (BOOL)isOpaque;
- (void)dealloc;
- (id)_peakTopHoldColor;
- (id)_peakBottomHoldColor;
- (void)_createProxyImages;
- (id)_localImageNamed:(id)arg1 extension:(id)arg2;
- (void)_redraw;
- (float)_scaledValue:(double)arg1;
- (void)_drawVerticalPeakForChannel:(unsigned int)arg1 horizontalOffset:(float)arg2;
- (float)calculateMeterWellGainPositions:(float)arg1;
- (unsigned int)getNumberOfLabels;
- (id)getLabelImageAtIndex:(unsigned int)arg1;
- (float)getLabelImageYOriginAtIndex:(unsigned int)arg1;
- (float)getLabelImageFrameYOriginAtIndex:(unsigned int)arg1;
- (unsigned int)getNumberOfTickMarks;
- (id)getTickMarkImage;
- (float)getTickMarkImageYOriginAtIndex:(unsigned int)arg1;
- (float)getTickMarkImageFrameYOriginAtIndex:(unsigned int)arg1;
- (void)_drawDBLabels:(struct CGRect)arg1;
- (void)_drawMeterWellGuidelines:(struct CGRect)arg1;
- (void)_drawNumbersLabelsForChannels:(struct CGPoint)arg1;
- (void)_drawSurroundLabelsForChannels:(struct CGPoint)arg1;
- (void)_drawChannelLabels;
- (void)_drawVerticalMeter:(struct CGRect)arg1 usingPeak:(id)arg2;
- (void)_drawHorizontalMeter:(struct CGRect)arg1 usingPeak:(id)arg2;
- (void)mouseDown:(id)arg1;
- (void)resetPeakIndicator:(id)arg1;
- (void)setFrameSize:(struct CGSize)arg1;
- (id)generateCachedMeterImage;
- (id)generateCachedMeterWellImage;
- (void)updateCachedMeterImages;
- (BOOL)usesPeakLight;
- (void)setUsesPeakLight:(BOOL)arg1;
- (void)resetImages;

@end

