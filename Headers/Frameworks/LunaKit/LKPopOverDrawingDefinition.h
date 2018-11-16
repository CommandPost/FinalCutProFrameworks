//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class LKPopOverThreePartFill, NSColor;

@interface LKPopOverDrawingDefinition : NSObject
{
    LKPopOverThreePartFill *outerStrokeGradient;
    LKPopOverThreePartFill *innerStrokeGradient;
    LKPopOverThreePartFill *fillGradient;
    NSColor *fillColor;
}

@property(retain) NSColor *fillColor; // @synthesize fillColor;
@property(retain) LKPopOverThreePartFill *fillGradient; // @synthesize fillGradient;
@property(retain) LKPopOverThreePartFill *innerStrokeGradient; // @synthesize innerStrokeGradient;
@property(retain) LKPopOverThreePartFill *outerStrokeGradient; // @synthesize outerStrokeGradient;
@property(readonly) float cornerRadius;
@property(readonly) float arrowWidth;
@property(readonly) float arrowHeight;
@property(readonly) float borderWidth;
- (void)dealloc;
- (id)init;

@end

