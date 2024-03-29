const TestLayout = ({
    children,
} : {
    children: React.ReactNode;
}) => {
    return (
        <div className="bg-rose-500 h-full">
            Layout
            {children}
        </div>
    )
}

export  default TestLayout;