//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface iLifePathElement : NSObject
{
    int m_type;
    NSMutableArray *m_points;
}

+ (id)elementWithCGPathElement:(const struct CGPathElement *)arg1;
@property(retain, nonatomic) NSMutableArray *points; // @synthesize points=m_points;
@property(nonatomic) int type; // @synthesize type=m_type;
- (struct CGPoint)endPoint;
- (struct CGPoint)startPoint;
- (void)dealloc;

@end

