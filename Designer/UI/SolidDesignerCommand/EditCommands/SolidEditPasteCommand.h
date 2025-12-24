#pragma once
#include "BaseCommands/SolidBaseCommand.h"
#include <memory>
#include <string>

namespace alice
{
	class IMainWindow;
	class IDocument;
	class IDocumentManager;
	struct CommandParameter;
	class IOperation;
}

namespace sdr
{
	class SolidEditPasteCommand final : public AppCommandBase
	{
	public:
		SolidEditPasteCommand() noexcept;

		~SolidEditPasteCommand() override ;

		bool IsSupported() const override;
		bool IsVisible() const override;
		bool IsEnabled() const override;
		std::string DisabledReason() const override;

		std::unique_ptr<alice::IOperation> Execute(const alice::CommandParameter& param) override;
	};

} // namespace sdr