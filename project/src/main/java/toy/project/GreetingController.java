package toy.project;

import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.RequestParam;
import org.springframework.web.bind.annotation.RestController;

import java.util.concurrent.atomic.AtomicLong;

//모든 Method는 view대신 도메인 객체를 반환해준다.
//Controller + ResponseBody = RestController
@RestController
public class GreetingController {
    private static final String template = "hello, %s";
    private final AtomicLong counter = new AtomicLong();

    @GetMapping("/greeting")
    public Greeting greeting(@RequestParam(value = "name", defaultValue = "world") String name)
    {
        return new Greeting(counter.incrementAndGet(), String.format(template,name));
    }
}
