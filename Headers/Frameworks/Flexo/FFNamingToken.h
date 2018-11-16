//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@class NSString;

@interface FFNamingToken : NSObject <NSCoding, NSCopying>
{
    NSString *_identifier;
    NSString *_displayString;
}

+ (id)tokenWithIdentifier:(id)arg1;
+ (id)namingTokens;
@property(retain) NSString *displayString; // @synthesize displayString=_displayString;
@property(retain) NSString *identifier; // @synthesize identifier=_identifier;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (void)dealloc;
- (id)initWithIdentifier:(id)arg1;

@end

