//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FxPlug/FxImage.h>

@interface FxHeliumImage : FxImage
{
    struct FxHeliumImagePriv *_heliumImagePriv;
}

- (unsigned long long)imageType;
- (HGRef_0de1db7e)heliumRef;
- (void)setHeliumRef:(const HGRef_0de1db7e *)arg1;
- (struct HGNode *)heliumNode;
- (void)setHeliumNode:(struct HGNode *)arg1;
- (void)dealloc;
- (id)initWithInfo:(CDStruct_4a07eeda)arg1 andHeliumRef:(const HGRef_0de1db7e *)arg2;
- (id)initWithInfo:(CDStruct_4a07eeda)arg1 andHeliumNode:(struct HGNode *)arg2;
- (id)initWithInfo:(CDStruct_4a07eeda)arg1;

@end

