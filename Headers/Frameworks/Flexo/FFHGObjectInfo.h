//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FFRendererInfo;

__attribute__((visibility("hidden")))
@interface FFHGObjectInfo : NSObject
{
    struct HGObject *_hgObject;
    FFRendererInfo *_rendererInfo;
}

- (struct HGObject *)hgObject;
- (id)rendererInfo;
- (id)initWithHGObject:(struct HGObject *)arg1 rendererInfo:(id)arg2;
- (void)dealloc;

@end

