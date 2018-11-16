//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Ozone/OZOverlay.h>

@class NSTimer;

@interface OZExposeOverlay : OZOverlay
{
    struct vector<OZExposeObject *, std::__1::allocator<OZExposeObject *>> *_exposeObjects;
    struct PCMutex *_mutex;
    NSTimer *_timer;
    int _numDone;
    _Bool _isEnabled;
    _Bool _isDisabling;
    _Bool _isDrilling;
    _Bool _isDragging;
    struct OZGroup *_rootGroup;
    double _startTime;
    double _exposeTime;
    id *_overlay;
    unsigned int _flags;
    struct PCPtr<LiGroup> _world;
    PCMatrix44Tmpl_e98c85ee _pixelTransform;
    struct OZRenderState _renderState;
    struct OZExposeObject *_currSelectedObject;
    _Bool _anythingExposed;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (BOOL)postRedisplayOnActivePartChange;
- (void)mouseDown:(id)arg1;
- (void)highlightObject:(struct OZExposeObject *)arg1;
- (void)highlightObjectWithID:(unsigned int)arg1;
- (int)hitCheckPoint:(const PCVector2_7e488b7d *)arg1;
- (int)hitCheck:(id)arg1;
- (struct OZObjectManipulator *)hitCheckNode:(const PCVector2_7e488b7d *)arg1;
- (void)draw;
- (void)updateRenderGraph:(double)arg1;
- (void)buildRenderGraph;
- (void)calculateNewRects;
- (void)buildExposeListForDrilling:(unsigned int)arg1 pBoard:(void *)arg2 dropInfo:(struct OZDropTargetInfo *)arg3;
- (void)buildExposeList:(unsigned int)arg1 pBoard:(void *)arg2 dropInfo:(struct OZDropTargetInfo *)arg3;
- (void)createExposeObject:(struct OZImageNode *)arg1 index:(int)arg2;
- (void)clearSelection;
- (void)clearExposeList;
- (void)disable;
- (void)enable:(unsigned int)arg1 pBoard:(void *)arg2 dropInfo:(struct OZDropTargetInfo *)arg3;
- (_Bool)anythingExposed;
- (_Bool)isEnabled;
- (void)heartbeat:(id)arg1;
- (void)incrementNumDone;
- (int)getDrawingOrder;
- (void)dealloc;
- (id)initWithHostDelegate:(id)arg1 andViewDelegate:(id)arg2 andObjectDelegate:(id)arg3 andChannel:(struct OZChannelBase *)arg4;

@end

