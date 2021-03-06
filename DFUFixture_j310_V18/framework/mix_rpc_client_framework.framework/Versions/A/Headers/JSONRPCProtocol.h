//
//  JSONRPCProtocol.h
//  mix_rpc_client
//
//  Created by Shark Liu on 06/08/2018.
//  Copyright © 2018 HWTE. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "RPCProtocol.h"

@interface JSONRPCException : NSException
+(id)exceptionWithMsg: (NSString *)msg;
@end

@interface JSONRPCProtocol: NSObject <RPCProtocol>
@end

@interface JSONRPCRequest: NSObject <RPCRequest>
@end

@interface JSONRPCResponse: NSObject <RPCResponse>
@end

@interface JSONRPCErrorResponse: JSONRPCResponse
@end

@interface JSONRPCSuccessResponse: JSONRPCResponse
@end

