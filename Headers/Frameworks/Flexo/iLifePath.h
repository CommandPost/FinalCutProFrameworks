//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface iLifePath : NSObject
{
    NSMutableArray *_elements;
}

+ (id)pathWithCGPath:(struct CGPath *)arg1;
@property(retain, nonatomic) NSMutableArray *elements; // @synthesize elements=_elements;
- (void).cxx_destruct;
- (struct CGAffineTransform)getTransformForStretchingPathFromPoint:(struct CGPoint)arg1 toPoint:(struct CGPoint)arg2;
- (id)elementsWithPoints;
- (struct CGPoint)endPoint;
- (struct CGPoint)startPoint;

@end

