inherit ROOM;

void create()
{
        set("short", "明教休息室");
        set("long", @LONG
这里是明教弟子起居的地方。靠墙摆着几张大床，床上铺的是篾
席。床头叠着床薄被，冬天想必很冷，弟子们全靠扎实的内功根
基御寒。
LONG
        );
        set("sleep_room",1);

        set("exits", ([
                   "south" : __DIR__"tonglu1",
               
        ]));

        set("objects",([
//
        ]));
        setup();
        replace_program(ROOM);
}
