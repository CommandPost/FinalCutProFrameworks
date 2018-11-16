//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFComponentOSC.h>

@class CHChannelAngle, CHChannelBase, CHChannelDouble, CHChannelFolder, CHChannelPosition, CHChannelScale, FFChannelChangeController, FFColorSecondaryEffect, NSString;

__attribute__((visibility("hidden")))
@interface FFColorSecondaryOSC : FFComponentOSC
{
    FFColorSecondaryEffect *_cse;
    CHChannelFolder *_chShape;
    CHChannelPosition *_chPosition;
    CHChannelDouble *_chCurvature;
    CHChannelDouble *_chSoftness;
    CHChannelScale *_chScale;
    CHChannelAngle *_chAngle;
    BOOL _scaleSelected;
    long long _activePart;
    int _dragCount;
    FFChannelChangeController *_changeController;
    BOOL _transactionStarted;
    CHChannelBase *_modifiedChannel;
    BOOL _shapeActive;
    BOOL _shapeVisible;
    NSString *_name;
    struct PCPtr<POTexture> _handlesTexture[3];
    struct PCPtr<POTexture> _pivotHandleTexture[3];
    struct PCPtr<POTexture> _rotationHandleTexture[3];
    struct PCPtr<POTexture> _curvatureHandleTexture[3];
}

- (id)initWithChannelFolder:(id)arg1 effectStack:(id)arg2 colorSecondaryEffect:(id)arg3;
- (void)dealloc;
- (BOOL)hitTest:(struct CGPoint)arg1;
- (double)ellipseAngleForUserAngle:(double)arg1 withCurvature:(double)arg2;
- (void)mouseDown:(id)arg1;
- (long long)handleAtEventLocation:(id)arg1;
- (void)mouseDragged:(id)arg1;
- (void)mouseUp:(id)arg1;
- (void)mouseMoved:(id)arg1;
- (void)addDrawProperties:(id)arg1 forTime:(CDStruct_1b6d18a9)arg2 forContainer:(id)arg3 viewBounds:(struct CGRect)arg4;
- (void)drawSuperEllipseToContext:(struct _CGLContextObject *)arg1 withTransform:(id)arg2 withCurvature:(double)arg3 withRadius:(struct CGPoint)arg4 withOffset:(struct CGPoint)arg5;
- (void)drawRect:(struct CGRect)arg1 toContext:(struct _CGLContextObject *)arg2 drawProperties:(id)arg3;
- (id)propertiesKey;
- (void)calcTransform:(id)arg1 atTime:(CDStruct_1b6d18a9)arg2;
- (void)calcTransform:(id)arg1 withScale:(BOOL)arg2 atTime:(CDStruct_1b6d18a9)arg3;
- (void)beginUndoTransactionOnChannel:(id)arg1 withName:(id)arg2;
- (void)endUndoTransaction;
- (id)getCursor;
- (id)cropMatrix;
@property(readonly, nonatomic) CHChannelFolder *parentChannel; // @synthesize parentChannel=_chShape;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) BOOL visible; // @synthesize visible=_shapeVisible;
@property(nonatomic) BOOL active; // @synthesize active=_shapeActive;

@end

