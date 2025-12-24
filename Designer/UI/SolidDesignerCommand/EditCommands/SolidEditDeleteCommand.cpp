#include "SolidEditDeleteCommand.h"
#include "SolidDesignerCommands.h"
#include "AliceIOperation.h"

using namespace sdr;
using namespace alice;

sdr::SolidEditDeleteCommand::SolidEditDeleteCommand() noexcept
	: AppCommandBase(std::string(Cmd::EDIT_DELETE))
{

}

sdr::SolidEditDeleteCommand::~SolidEditDeleteCommand()
{

}

bool SolidEditDeleteCommand::IsSupported() const
{
	return false;
}

bool SolidEditDeleteCommand::IsVisible() const
{
	return false;
}

bool SolidEditDeleteCommand::IsEnabled() const
{
	return false;
}

std::string SolidEditDeleteCommand::DisabledReason() const
{
	return {};
}

std::unique_ptr<alice::IOperation> SolidEditDeleteCommand::Execute(const alice::CommandParameter& param)
{
	return nullptr;
}