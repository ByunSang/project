import React from "react";
import NormalHeader from "./header";
import NormalNavigation from "./navigation";
import NormalFooter from "./footer";

class Normal extends React.Component {
    render() {
        return (
            <div className="w-full flex flex-col">
                <NormalHeader />
                <NormalNavigation />
                <div class="w-full h-screen flex flex-col p-12">
                    <button class="w-20 rounded-2xl shadow font-bold" onClick={handleClick}>Test</button>
                </div>
                <NormalFooter />
            </div>
        )

        function handleClick() {
            ///////////////여기가 줄 데이터 세팅///////////////
            var jsonData = {
                "users": [
                    {
                        "name": "alan",
                        "age": 23,
                        "username": "aturing"
                    },
                    {
                        "name": "john",
                        "age": 29,
                        "username": "__john__"
                    }
                ]
            }

            ///////////////////////////////////////////////////

            fetch('http://localhost:8080/', {  // 여기에 주소랑 포트 입력

                method: 'POST',
                mode: 'cors',
                body: JSON.stringify(jsonData)

            })

        }
    }
}

export default Normal;