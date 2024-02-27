npx create-next-app@latest trello-tutorial
✔ Would you like to use TypeScript? …  Yes
✔ Would you like to use ESLint? …  Yes
✔ Would you like to use Tailwind CSS? …  Yes
✔ Would you like to use `src/` directory? … No
✔ Would you like to use App Router? (recommended) …  Yes
✔ Would you like to customize the default import alias (@/*)? … No

*/

npx shadcn-ui@latest init
Ok to proceed? (y) y
✔ Which style would you like to use? › Default
✔ Which color would you like to use as base color? › Neutral
✔ Would you like to use CSS variables for colors? … yes


// Routing:- 
// Create folder:- example
// create file inside example:- page.tsx
// http://localhost:3000/example
// page.tsx:-
const ExamplePage = () => {
  return (
    <div>Example Page</div>
  )
}

export default ExamplePage;


// Dynamic Routing:-
// Create folder:- user
// Create folder inside user:- [id]
// create file inside [id]:- page.tsx
// http://localhost:3000/users/456
// page.tsx:-
const IdPage = ({
        params,
    }: {
        params: {id: string}
    }) => {
  return (
    <div>
      Id {params.id} 
    </div>
  );
};
export default IdPage

// Note:- 
// Next js me app ke andar koi folder hoga vo route baan jaye ga 
// app ke andar jo folder "()" bracket use karke banna hoga vo route nahi baane ga

// Exclude route inside app folder:-
// Create folder:- (test)
// Create file inside (test):- page.tsx 
// http://localhost:3000/test --> 404 error
// http://localhost:3000/(test) --> 404 error
// page.tsx:-
const TestPage = () => {
  return <div>Page inside bracket</div>;
};

export default TestPage;


// Re-useable Layout for different Route:-
photo t1
    // Create folder:- (test)
    // Create folder inside (test):- something
    // Create file inside something folder:- page.tsx 

    // something:- inside(test)--> other folder
    // http://localhost:3000/something --> route running with layout.tsx file
    // page.tsx:-
    const SomethingPage = () => {
    return <div>Something Page</div>;
    };
    export default SomethingPage;

    // other:- inside(test)--> other folder
    // http://localhost:3000/other --> route running with layout with layout.tsx file
    // page.tsx:-
    const SomethingPage = () => {
    return <div>Something Page</div>;
    };
    export default SomethingPage;

    // layout.tsx:- inside(test) folder
    // page.tsx:-
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

// Fix CSS:- (because "h-full" CSS is not working)
// inside app folder--> global.css--> add below line
    html,
    body,
    :root {
    height: 100%;
    }


39:10

// API Routes:-
// Create folder:- users
// Create folder inside users:- route.ts
// http://localhost:3000/users
// route.ts:-
import { NextResponse } from "next/server";
export function GET() {
    return NextResponse.json({
        hello: "trello",
    })
}
export function POST() {
    return NextResponse.json({
        hello: "trello",
    })
}
export function PATCH() {
    return NextResponse.json({
        hello: "trello",
    })
}

50:15

npm install lucide-react
npx shadcn-ui@latest add button

(marketing)
    layout.tsx
    page.tsx
    logo.tsx
