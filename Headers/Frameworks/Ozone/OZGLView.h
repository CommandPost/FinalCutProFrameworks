//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Ozone/OZNoLeakOpenGLView.h>

@interface OZGLView : OZNoLeakOpenGLView
{
    struct shared_ptr<PGContext> *_pContext;
    float _width;
    float _height;
    BOOL _usingSharedContext;
    int _currentVirtualScreen;
}

- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;
- (void)reshape;
- (void)drawRect:(struct CGRect)arg1;
- (void)postRedisplay;
- (float)getWidth;
- (float)getHeight;
- (PCRect_07ce470f)getBounds;
- (void)mouseDown:(id)arg1;
- (void)mouseDragged:(id)arg1;
- (void)mouseUp:(id)arg1;
- (void)initContext:(BOOL)arg1;
- (void)update;
- (int)currentVirtualScreen;
- (void)setupVirtualScreen;

@end
