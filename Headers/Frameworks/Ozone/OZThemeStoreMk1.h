//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ProPSDThemeStore.h"

@interface OZThemeStoreMk1 : ProPSDThemeStore
{
}

- (id)pathForThemeAssetWithAtom:(_themeatom_union_d9d1758e)arg1;
- (unsigned int)sliceNumberForAtom:(_themeatom_union_d9d1758e)arg1 atIndex:(unsigned int)arg2;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeThemeAtom:(_themeatom_union_d9d1758e)arg1 withCoder:(id)arg2;
- (_themeatom_union_d9d1758e)decodeThemeAtomWithCoder:(id)arg1;

@end
