//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@interface PCMatrix44Double : NSObject <NSSecureCoding, NSCopying>
{
    double _m[4][4];
    PCMatrix44Tmpl_93ed1289 *_pcMatrix;
}

+ (BOOL)supportsSecureCoding;
+     // Error parsing type: @144@0:8{?=[4]}16, name: matrixWithSIMDDouble4x4:
+     // Error parsing type: @80@0:8{?=[4]}16, name: matrixWithSIMDFloat4x4:
- (id)newPlanarTransformTo:(id)arg1;
- (id)newTransformTo:(id)arg1;
- (id)newNSAffineTransform;
- (void)leftFlipAboutY:(double)arg1;
- (void)rightMult:(id)arg1;
- (void)leftMult:(id)arg1;
- (void)scaleSizeX:(double)arg1 sizeY:(double)arg2 sizeZ:(double)arg3 scaledSizeX:(double *)arg4 scaledSizeY:(double *)arg5 scaledSizeZ:(double *)arg6;
- (CDStruct_a6477b43)transformInfo;
- (struct CGPoint)transformPoint:(struct CGPoint)arg1;
- (struct CGRect)transformRect:(struct CGRect)arg1;
- (BOOL)invert2D;
- (void)transpose;
- (BOOL)invert;
- (void)rightRotate:(double)arg1 axis:(int)arg2;
- (void)leftRotate:(double)arg1 axis:(int)arg2;
- (void)rightShearX:(double)arg1 shearY:(double)arg2;
- (void)leftShearX:(double)arg1 shearY:(double)arg2;
- (void)rightScaleX:(double)arg1 scaleY:(double)arg2 scaleZ:(double)arg3;
- (void)leftScaleX:(double)arg1 scaleY:(double)arg2 scaleZ:(double)arg3;
- (void)rightTranslateX:(double)arg1 translateY:(double)arg2 translateZ:(double)arg3;
- (void)leftTranslateX:(double)arg1 translateY:(double)arg2 translateZ:(double)arg3;
- (void)makeIdentity;
- (BOOL)isIdentity;
// Error parsing type for property SIMDDouble4x4:
// Property attributes: T{?=[4]},N

// Error parsing type for property SIMDFloat4x4:
// Property attributes: T{?=[4]},N

- (id)array;
- (void)setDoubles:(double [16])arg1;
- (void)getDoubles:(double [16])arg1;
- (void)setDoubleValue:(double)arg1 atRow:(unsigned int)arg2 col:(unsigned int)arg3;
- (double)doubleValueAtRow:(unsigned int)arg1 col:(unsigned int)arg2;
- (PCMatrix44Tmpl_93ed1289 *)pcMatrix;
- (id)extendedDescription;
- (id)compactDescription;
- (id)debugDescription;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
-     // Error parsing type: @144@0:8{?=[4]}16, name: initWithSIMDDouble4x4:
-     // Error parsing type: @80@0:8{?=[4]}16, name: initWithSIMDFloat4x4:
- (id)initWithArray:(id)arg1;
- (id)initWithDoubles:(double [16])arg1;
- (id)initWithDoubles:(double [16])arg1 external:(BOOL)arg2;
- (id)init;
- (id)initWithPCMatrix:(PCMatrix44Tmpl_93ed1289 *)arg1;

@end

