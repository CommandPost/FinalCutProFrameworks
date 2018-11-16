//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFProOSC.h>

@class CHChannelDouble, CHChannelFolder, CHChannelPosition, FFColorSecondaryEffect, FFPixelBuffer, PCMatrix44Double;

__attribute__((visibility("hidden")))
@interface FFColorIsolationOSC : FFProOSC
{
    FFColorSecondaryEffect *_colorSecondaryEffect;
    CHChannelFolder *_parentChannel;
    CHChannelPosition *_position;
    CHChannelDouble *_radius;
    CHChannelDouble *_isolationMatrix00;
    CHChannelDouble *_isolationMatrix01;
    CHChannelDouble *_isolationMatrix02;
    CHChannelDouble *_isolationMatrix03;
    CHChannelDouble *_isolationMatrix10;
    CHChannelDouble *_isolationMatrix11;
    CHChannelDouble *_isolationMatrix12;
    CHChannelDouble *_isolationMatrix13;
    CHChannelDouble *_isolationMatrix20;
    CHChannelDouble *_isolationMatrix21;
    CHChannelDouble *_isolationMatrix22;
    CHChannelDouble *_isolationMatrix23;
    CHChannelDouble *_sof;
    FFPixelBuffer *_buffer;
    PCMatrix44Double *_bufferPT;
    int _manip;
    BOOL _active;
    BOOL _visible;
    int _actionMode;
    BOOL _mouseAction;
    vector_9190dcc8 *_samples;
    vector_9190dcc8 *_samplesCurrent;
    CDStruct_1b6d18a9 _samplesFigTime;
    struct Mat4f *_mBwOriginalMatrix;
    struct {
        unsigned int isPendingTransaction:1;
    } _state;
}

+ (struct CGColorSpace *)processingColorSpace;
- (id)initWithChannelFolder:(id)arg1 effectStack:(id)arg2 colorSecondaryEffect:(id)arg3;
- (void)dealloc;
- (id)parentChannel;
- (CDStruct_1b6d18a9)getChannelTime;
- (BOOL)mouseCreatesUndo;
- (void)setCursor;
- (void)flagsChanged:(id)arg1;
- (void)proOSCMouseDownInitialize:(id)arg1;
- (void)mouseDragged:(id)arg1;
- (void)mouseUp:(id)arg1;
- (void)readBuffer;
- (void)drawRect:(struct CGRect)arg1 toContext:(struct _CGLContextObject *)arg2 drawProperties:(id)arg3;
- (struct Vec3f)addSamples:(vector_9190dcc8 *)arg1;
- (void)setMatrix;
- (id)getCursor;
@property(nonatomic) BOOL visible; // @synthesize visible=_visible;
@property(nonatomic) BOOL active; // @synthesize active=_active;

@end

