#include "inc.hpp"


auto main( ) -> uint32_t {
	SetConsoleTitleA( xorstr_( "Test" ) );

	::std::printf( xorstr_( "Hello World!\n" ) );

	const auto pid = ::det::get_pid( xorstr_( L"Discord.exe" ) )[0];
	h_proc = OpenProcess( PROCESS_ALL_ACCESS, false, pid );
	const auto base = ::det::get_base( pid, xorstr_( L"Discord.exe" ) );

	::std::printf( xorstr_( "Process ID: %i\n" ), pid );
	::std::printf( xorstr_( "Handle: 0x%X\n" ), h_proc );
	::std::printf( xorstr_( "Base Address: 0x%X\n" ), base );

	system( xorstr_("pause") );

    return EXIT_SUCCESS;
}