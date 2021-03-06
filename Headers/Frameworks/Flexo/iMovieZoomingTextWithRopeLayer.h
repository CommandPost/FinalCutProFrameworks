//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Flexo/iMovieZoomingTextWithBounceLayer.h>

#import <Flexo/iMovieMicaPlugin-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface iMovieZoomingTextWithRopeLayer : iMovieZoomingTextWithBounceLayer <iMovieMicaPlugin>
{
}

+ (id)defaultValueForKey:(id)arg1;
+ (id)timeStretchableBeginTimeProperties;
+ (id)micaPluginProperties;
- (void)stretchPathInShapeLayer:(id)arg1 fromStartPoint:(struct CGPoint)arg2 toEndPoint:(struct CGPoint)arg3;
- (void)animateShapeLayer:(id)arg1 beginTime:(double)arg2 duration:(double)arg3;
- (id)makeRopeLayerFromTemplateWithName:(id)arg1;
- (void)addRopeLayer:(id)arg1 startPoint:(struct CGPoint)arg2 endPoint:(struct CGPoint)arg3 beginTime:(double)arg4 duration:(double)arg5 ropeContainerLayer:(id)arg6;
- (struct CGPoint)connectionPointForLeftSideOfGlyphLayer:(id)arg1 ropeContainerLayer:(id)arg2;
- (struct CGPoint)connectionPointForRightSideOfGlyphLayer:(id)arg1 ropeContainerLayer:(id)arg2;
- (id)ropeConnectionPoints;
- (id)layersToConnectWithRopes;
- (void)addRopes;
- (void)buildRopeContainerLayer;
- (void)removeRopeContainerLayer;
- (id)ropeContainerLayer;
- (void)removeGeneratedLayers;
- (void)customizeSublayers;

// Remaining properties
@property(copy) NSString *downRopeName; // @dynamic downRopeName;
@property(copy) NSString *leftRopeName; // @dynamic leftRopeName;
@property double leftRopePositionX; // @dynamic leftRopePositionX;
@property double leftRopePositionY; // @dynamic leftRopePositionY;
@property(copy) NSString *rightRopeName; // @dynamic rightRopeName;
@property double rightRopePositionX; // @dynamic rightRopePositionX;
@property double rightRopePositionY; // @dynamic rightRopePositionY;
@property double ropeAnimationBeginTime; // @dynamic ropeAnimationBeginTime;
@property double ropeAnimationDuration; // @dynamic ropeAnimationDuration;
@property double ropeInsetPercentX; // @dynamic ropeInsetPercentX;
@property BOOL shouldAttachToCharacterBackgrounds; // @dynamic shouldAttachToCharacterBackgrounds;
@property(copy) NSString *spaceRopeName; // @dynamic spaceRopeName;
@property(copy) NSString *upRopeName; // @dynamic upRopeName;

@end

