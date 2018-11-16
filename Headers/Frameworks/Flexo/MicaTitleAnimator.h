//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/MicaAnimator.h>

@class CALayer, MapLocation, NSMutableArray, iMovieCreditsLayer, iMovieScalableTextLayer;

__attribute__((visibility("hidden")))
@interface MicaTitleAnimator : MicaAnimator
{
    NSMutableArray *m_textGroups;
    iMovieCreditsLayer *m_creditsLayer;
    CALayer *m_videoLayer;
    CALayer *m_animaticLayer;
    CALayer *m_mapLayer;
    CALayer *m_locationLayer;
    iMovieScalableTextLayer *m_locationTextLayer;
    CALayer *m_locationMarkerLayer;
    CALayer *m_locationMarkerUpLayer;
    CALayer *m_locationMarkerDownLayer;
    double m_originalLocationFontSize;
    MapLocation *m_mapLocation;
    CALayer *m_pickerThumbnailBoundsLayer;
    CALayer *m_projectThumbnailBoundsLayer;
    iMovieScalableTextLayer *m_projectThumbnailTextLayer1;
    BOOL m_editMode;
    double m_editFieldHeight;
}

@property(nonatomic) double editFieldHeight; // @synthesize editFieldHeight=m_editFieldHeight;
@property(nonatomic) BOOL editMode; // @synthesize editMode=m_editMode;
@property(retain, nonatomic) iMovieScalableTextLayer *projectThumbnailTextLayer1; // @synthesize projectThumbnailTextLayer1=m_projectThumbnailTextLayer1;
@property(retain, nonatomic) CALayer *projectThumbnailBoundsLayer; // @synthesize projectThumbnailBoundsLayer=m_projectThumbnailBoundsLayer;
@property(retain, nonatomic) CALayer *pickerThumbnailBoundsLayer; // @synthesize pickerThumbnailBoundsLayer=m_pickerThumbnailBoundsLayer;
@property(retain, nonatomic) MapLocation *mapLocation; // @synthesize mapLocation=m_mapLocation;
@property(retain, nonatomic) CALayer *locationMarkerDownLayer; // @synthesize locationMarkerDownLayer=m_locationMarkerDownLayer;
@property(retain, nonatomic) CALayer *locationMarkerUpLayer; // @synthesize locationMarkerUpLayer=m_locationMarkerUpLayer;
@property(retain, nonatomic) CALayer *locationMarkerLayer; // @synthesize locationMarkerLayer=m_locationMarkerLayer;
@property(retain, nonatomic) iMovieScalableTextLayer *locationTextLayer; // @synthesize locationTextLayer=m_locationTextLayer;
@property(retain, nonatomic) CALayer *locationLayer; // @synthesize locationLayer=m_locationLayer;
@property(retain, nonatomic) CALayer *mapLayer; // @synthesize mapLayer=m_mapLayer;
@property(retain, nonatomic) CALayer *animaticLayer; // @synthesize animaticLayer=m_animaticLayer;
@property(retain, nonatomic) CALayer *videoLayer; // @synthesize videoLayer=m_videoLayer;
@property(retain, nonatomic) iMovieCreditsLayer *creditsLayer; // @synthesize creditsLayer=m_creditsLayer;
@property(retain, nonatomic) NSMutableArray *textGroups; // @synthesize textGroups=m_textGroups;
- (void)configureForDisplayAsProjectThumbnailWithDisplayName:(id)arg1;
- (void)updateLocationMarker;
- (void)updateLocationText;
- (void)disableEditMode;
- (void)enableEditModeWithEditFieldHeight:(double)arg1;
- (void)setTextHidden:(BOOL)arg1;
- (void)setText:(id)arg1 groupIndex:(unsigned long long)arg2 stringIndex:(unsigned long long)arg3;
- (BOOL)textShouldUseAllCaps;
- (int)verticalTextAlignment;
- (id)firstTextGroup;
- (void)dealloc;
- (id)initWithPath:(id)arg1 rootLayer:(id)arg2 publishedObjects:(id)arg3;

@end

