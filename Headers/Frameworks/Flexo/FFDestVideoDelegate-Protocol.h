//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class FFDestVideo, FFImage, FFPlayerFrame, NSMapTable;

@protocol FFDestVideoDelegate
- (BOOL)is360Viewer;
- (BOOL)showBothFields;
- (BOOL)isMultiangleViewer;
- (BOOL)shouldDrawVideoDest:(FFDestVideo *)arg1;
- (BOOL)didDrawVideoAtTime:(CDStruct_1b6d18a9)arg1 drawContext:(struct _CGLContextObject *)arg2 drawProperties:(NSMapTable *)arg3 isDisplaying:(BOOL)arg4;
- (void)addDrawProperties:(NSMapTable *)arg1 forFrame:(FFPlayerFrame *)arg2 atTime:(CDStruct_1b6d18a9)arg3;

@optional
- (FFImage *)newProjectedImageForPlayerFrame:(FFPlayerFrame *)arg1;
- (void)setDrawingEnabled:(BOOL)arg1;
- (struct CGRect)getSourceRectAndDrawRect:(struct CGRect *)arg1 imageBounds:(struct CGRect)arg2 isFlipped:(BOOL)arg3;
- (long long)colorChannelDisplayMode;
- (void)setSequenceBounds:(struct CGRect)arg1 sequenceCameraMode:(int)arg2;
@end

