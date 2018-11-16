//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@interface FxMatrix44 : NSObject <NSSecureCoding>
{
    double _mat[4][4];
}

+ (BOOL)supportsSecureCoding;
- (void)transpose;
- (id)description;
- (struct FxPoint3D)transform3DPoint:(struct FxPoint3D)arg1;
- (struct CGPoint)transform2DPoint:(struct CGPoint)arg1;
- (BOOL)invert;
- (BOOL)_planarInverseZ;
- (double (*)[4][4])matrix;
- (void)setMatrix:(double [4][4])arg1;
- (void)setToIdentity;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithFxMatrix:(id)arg1;
- (id)initWithColorMatrix44Data:(double [4][4])arg1;
- (id)initWithMatrix44Data:(double [4][4])arg1;
- (id)init;

@end

