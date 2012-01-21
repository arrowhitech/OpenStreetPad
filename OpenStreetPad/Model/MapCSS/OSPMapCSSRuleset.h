//
//  Ruleset.h
//  OpenStreetPad
//
//  Created by Thomas Davie on 02/11/2011.
//  Copyright (c) 2011 Thomas Davie. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "OSPAPIObject.h"

#import "CoreParse.h"

@interface OSPMapCSSRuleset : NSObject <CPParseResult>

@property (readwrite, copy) NSArray *rules;

- (NSDictionary *)applyToObjcet:(OSPAPIObject *)object;
- (NSDictionary *)styleForCanvas;

@end