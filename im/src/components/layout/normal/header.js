import React from "react";

class NormalHeader extends React.Component{
    render(){
        return (
        <div className="w-full h-16 flex flex-row px-8 justify-between items-center shadow ">
            <div class="flex w-1/3 text-2xl font-sans font-extrabold">Byun</div>
            <div class="w-1/3 flex flex-row gap-12">
                <button class="transition transform duration-200 ease-in-out hover:scale-125 font-sans font-bold text-xl">A</button>
                <button class="transition transform duration-200 ease-in-out hover:scale-125 font-sans font-bold text-xl">B</button>
                <button class="transition transform duration-200 ease-in-out hover:scale-125 font-sans font-bold text-xl">C</button>
                <button class="transition transform duration-200 ease-in-out hover:scale-125 font-sans font-bold text-xl">D</button>
            </div>
            <button class="w-10 h-10 flex bg-indigo-600 shadow rounded-full justify-center items-center text-2xl text-white font-sans font-black">
                L
            </button>
        </div>
        )
    }
}

export default NormalHeader;