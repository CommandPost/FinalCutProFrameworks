//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CALayer.h"

#import "iMovieMicaPlugin.h"

__attribute__((visibility("hidden")))
@interface iLifeFanLayer : CALayer <iMovieMicaPlugin>
{
    unsigned int m_lastLeafCount;
}

+ (struct CGColor *)defaultLeafShadowColor;
+ (struct CGColor *)defaultLeafBorderColor;
+ (struct CGColor *)defaultLeafBackgroundColor;
+ (id)micaPluginProperties;
+ (BOOL)needsDisplayForKey:(id)arg1;
+ (id)defaultValueForKey:(id)arg1;
- (unsigned long long)indexOfLeaf:(id)arg1;
- (void)moveLeafToTop:(id)arg1;
- (double)percentOfPoint:(struct CGPoint)arg1 throughArcOfLeaf:(id)arg2 leafSizeInDegrees:(double)arg3;
- (double)distanceBetweenCenterOfFanAndPoint:(struct CGPoint)arg1;
- (BOOL)isPoint:(struct CGPoint)arg1 withinLeaf:(id)arg2;
- (BOOL)isPoint:(struct CGPoint)arg1 nearRayBetweenFanCenterAndLeaf:(id)arg2 leafSizeInDegrees:(double)arg3;
- (void)getMinDegrees:(double *)arg1 maxDegrees:(double *)arg2 ofLeaf:(id)arg3 leafSizeInDegrees:(double)arg4;
- (id)leafThatContainsPoint:(struct CGPoint)arg1;
- (id)arrayOfLeaves;
- (void)ensureLeavesAreBuilt;
- (void)updateLeaves;
- (void)buildEverythingForDisplay;
- (void)removeContainerLayer;
- (id)containerLayer;
- (struct CGPoint)positionForLeafIndex:(unsigned long long)arg1;
- (struct CATransform3D)transformForLeafIndex:(unsigned long long)arg1;
- (double)radiansForLeafIndex:(unsigned long long)arg1;
- (void)layerDidBecomeVisible:(BOOL)arg1;
- (void)display;

// Remaining properties
@property double expandedLeafAngularScale; // @dynamic expandedLeafAngularScale;
@property int expandedLeafIndex; // @dynamic expandedLeafIndex;
@property double fanAngularSpread; // @dynamic fanAngularSpread;
@property struct CGPoint fanPosition; // @dynamic fanPosition;
@property double fanRadius; // @dynamic fanRadius;
@property struct CGColor *leafBackgroundColor; // @dynamic leafBackgroundColor;
@property struct CGColor *leafBorderColor; // @dynamic leafBorderColor;
@property double leafBorderWidth; // @dynamic leafBorderWidth;
@property unsigned int leafCount; // @dynamic leafCount;
@property struct CGColor *leafShadowColor; // @dynamic leafShadowColor;
@property struct CGSize leafShadowOffset; // @dynamic leafShadowOffset;
@property double leafShadowOpacity; // @dynamic leafShadowOpacity;
@property double leafShadowRadius; // @dynamic leafShadowRadius;
@property struct CGSize leafSize; // @dynamic leafSize;

@end
