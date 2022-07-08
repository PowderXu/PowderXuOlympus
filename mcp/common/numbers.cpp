#include "numbers.hpp"

#include <blake2/blake2.h>

#include <cryptopp/aes.h>
#include <cryptopp/modes.h>

#include <mcp/common/base58.h>
#include <mcp/common/common.hpp>

#include <libdevcore/CommonData.h>

thread_local CryptoPP::AutoSeededRandomPool mcp::random_pool;

mcp::p2p::node_id mcp::p2p::toNodeId(dev::PublicCompressed const & pubkey) {
	return (mcp::p2p::node_id) pubkey.ref().cropped(1);
}