// corpse.c

inherit ITEM;

int decayed;

void create()
{
        set_name("����ʬ��", ({ "corpse" ,"shiti" }) );
        set("long", "����һ������ʬ�塣\n");
        set("unit", "��" );
	decayed = 0;
//	decayed = 1;
        if( clonep(this_object()) ) call_out("decay", 120, 1);
}

int is_corpse() { return decayed < 2; }
int is_character() { return decayed < 1; }
int is_container() { return 1; }

string short() { return name() + "(" + capitalize(query("id")) + ")"; }

void decay(int phase)
{
	string msg;
        decayed = phase;
        switch(phase) {
                case 1:
			msg=query("name") +
"��ʼ�����ˣ�����һ�����ŵĶ����\n";
			message("say",msg,environment(this_object()),this_object());
                        switch(query("gender")) {
                                case "����":
                                        set_name("���õ���ʬ", ({ "corpse", 
"ʬ��" }) );
                                case "Ů��":
                                        set_name("���õ�Ůʬ", ({ "corpse", 
"ʬ��" }) );
                                default:
                                        set_name("���õ�ʬ��", ({ "corpse", 
"ʬ��" }) );
                        }
                        set("long",     
"���ʬ����Ȼ�Ѿ�����������һ��ʱ���ˣ���ɢ����һ�ɸ�ʬ��ζ����\n");
                        call_out("decay", 120, phase + 1);
                        break;
                case 2:
			msg=query("name") + "���紵Ǭ�ˣ����һ�ߺ��ǡ�\n";
			message("say",msg,environment(this_object()),this_object());
                        set_name("һ�߿�Ǭ�ĺ���", ({ "skeleton", "����" }) 
);
                        set("long", "�⸱�����Ѿ���������ܾ��ˡ�\n");
                        call_out("decay", 60, phase + 1);
                        break;
                case 3:
			msg="һ��紵������" + query("name") +
"���ɹǻҴ�ɢ�ˡ�\n";
			message("say",msg,environment(this_object()),this_object());
                        if( environment() ) {
                                object *inv;
                                int i;
                                
                                inv = all_inventory(this_object());
                                for(i=0; i<sizeof(inv); i++) 
        {
        if(inv[i]->query("no_get")) continue;
        if(inv[i]->query("no_drop")) continue;
        if(inv[i]->query("no_sell")) continue;
	inv[i]->move(environment());
        }
                        }
                        destruct(this_object());
                        break;
        }
}

object animate(object who, int time)
{
        object zombie;

        if( !environment() ) return 0;

        seteuid(getuid());
        zombie = new("/obj/npc/zombie");
        zombie->set_name( (string)query("victim_name") + "�Ľ�ʬ", ({ 
"zombie" }) );
        zombie->move(environment());
        zombie->animate(who, time);

        destruct(this_object());
        return zombie;
}
 
