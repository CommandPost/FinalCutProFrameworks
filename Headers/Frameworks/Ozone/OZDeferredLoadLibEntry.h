//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Ozone/OZLibraryEntry.h>

@interface OZDeferredLoadLibEntry : OZLibraryEntry
{
    Class _entryClass;
    BOOL _isLoaded;
}

- (id)initWithParent:(id)arg1 name:(id)arg2 entryClass:(Class)arg3;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)doDeferredLoad;
- (BOOL)isLoaded;

@end
