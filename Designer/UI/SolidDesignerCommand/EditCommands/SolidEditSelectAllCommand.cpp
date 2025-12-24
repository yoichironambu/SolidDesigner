#include "SolidEditSelectAllCommand.h"
#include "SolidDesignerCommands.h"
#include "AliceIOperation.h"

using namespace sdr;
using namespace alice;

sdr::SolidEditSelectAllCommand::SolidEditSelectAllCommand() noexcept
	: AppCommandBase(std::string(Cmd::EDIT_SELECTALL))
{

}

sdr::SolidEditSelectAllCommand::~SolidEditSelectAllCommand()
{

}

bool SolidEditSelectAllCommand::IsSupported() const
{
	return false;
}

bool SolidEditSelectAllCommand::IsVisible() const
{
	return false;
}

bool SolidEditSelectAllCommand::IsEnabled() const
{
	return false;
}

std::string SolidEditSelectAllCommand::DisabledReason() const
{
	return {};
}

std::unique_ptr<alice::IOperation> SolidEditSelectAllCommand::Execute(const alice::CommandParameter& param)
{
	return nullptr;
}