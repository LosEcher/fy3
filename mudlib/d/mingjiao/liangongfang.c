inherit ROOM;

void create()
{
        set("short", "������");
        set("long", @LONG
        ���������̵������������ܷ��⼸�������ܣ����������̸�
����ƽʱ�����õı������������һ���ϻ��з�����Ʒ��
LONG
        );
        set("exits", ([
                "west" : __DIR__"dadian",
        ]));
        set("objects", ([
                "/d/mingjiao/obj/changjian" : 1,
                "/d/mingjiao/obj/toukui":1,
                "/d/mingjiao/obj/gangdao":1,
                "/d/obj/armor/tiejia.c":1,
                                    ]));

        set("no_fight", 1);

        setup();
        replace_program(ROOM);
}
