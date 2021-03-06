//
//  LSIErrors.h
//  Astronomy - ObjC
//
//  Created by James McDougall on 3/5/21.
//

#import <Foundation/Foundation.h>

// Declare a constant that will be defined in the .m file
extern NSString * const LSIErrorDomain;

// Use the NS_ENUM() macro when making new enum values
typedef NS_ENUM(NSInteger, LSIErrorCode) {
    LSIAPIError = 1000,           // generic API error
    LSIJSONDecodeError = 1001,    // JSON decoding error
    LSIDataNilError = 1002,       // Data is nil error
    
    // TODO: Add more error codes here that may need to be handled
};

/// Creates an error with a localized message
NSError *errorWithMessage(NSString *message, NSInteger errorCode);
