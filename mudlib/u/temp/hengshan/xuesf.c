//make by temp
//ROOM: xuesf.c


inherit ROOM;

void create()
{
        set("short", "�׿ߺ�");
        set("long",@LONG
Ŷ���㾪�ȵĿ���ǰ����ԭ��������һ��������������������
������ˮ�峺��һ���Ǵ�ɽ����������ѩˮ�ڻ��ģ�������������
ˮû�б��ˮ��������ˮȴһֱ��ô�࣬����ԴԴ���ϵ�ѩˮ����
��ȥ�ˣ�
LONG
        );
        set("exits", ([
                "northeast" : __DIR__"xuedi1",
                "eastup" : __DIR__"miling1"
        ]));
        setup();
        replace_program(ROOM);
}
