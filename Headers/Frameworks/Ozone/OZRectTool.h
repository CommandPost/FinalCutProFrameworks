//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Ozone/OZShapeTool.h>

@interface OZRectTool : OZShapeTool
{
}

- (double)getDefaultRoundness;
- (BOOL)showEditToolOnCompletion;
- (void)roundShape;
- (void)createShape:(CDStruct_1b6d18a9)arg1;
- (void)draw;
- (void)smoothContour:(vector_8f06c10f *)arg1 y:(vector_8f06c10f *)arg2 amount:(int)arg3;
- (struct PCUUID)getOSCClassID;
- (struct PCUUID)getClassID;
- (id)getTooltip;
- (id)getName;
- (void)dealloc;
- (id)initWithHostDelegate:(id)arg1 andViewDelegate:(id)arg2 andObjectDelegate:(id)arg3 andChannel:(struct OZChannelBase *)arg4;

@end

