// tyroad11.c ��԰С·
// by Marz 

inherit ROOM;
void do_tao();
int do_zhai(string arg);
void create()
{
	    
	set("short", "��÷԰");
	set("long", @LONG
	��ǰ��Ȼ���ʣ������ɵ�������÷԰��С·�ϡ�������������(tree)������ʢ��
�ŷۺ���һ�������һƬ���������ߡ���ʱ���۷䡸���ˡ��طɹ�����ʧ���ڻ���
�У���ֻ���������ϻ���׷���ţ�ߴߴ�������������ӡ�Զ���Ǹ߸ߵ������塣
LONG
	);
	set("exits", ([
		"east" : __DIR__"lameigt",
	]));
        set("objects", ([
                __DIR__"npc/guest1" : 2,
                __DIR__"npc/yudanyan" : 1]));
setup ();
}
void init()
{
	add_action("do_zhai","zhai");
}

int do_zhai(string arg)
{       object tao;
         if( !arg || arg=="" ) {
message_vision("����ժʲô��\n", this_player());
return 1;
}
        if( arg=="tao"||arg=="taozi" ) {
            if(query("taocount") > 0){
                message_vision(
       "$N������ժ��һ����͸��ˮ���ҡ�\n"
                        , this_player());
tao=new(__DIR__"npc/obj/mitao");
                tao->move(this_player());
		add("taocount",-1);
                return 1;
		}else
        message_vision(
	"����ô�ż�ѽ���һ�û���ء�\n" , this_player());
	remove_call_out("do_tao");
        call_out("do_tao",60);
	return 1;	     
                }
        return 0;
}
void do_tao()
{
	set("taocount",2);
}
